CREATE SCHEMA `imobiliario` ;

CREATE TABLE `imobiliario`.`conjugue` (
  `NIF` INT NOT NULL,
  `Nome` VARCHAR(255) NOT NULL,
  `Telefone` VARCHAR(255) NULL,
  `Email` VARCHAR(255) NULL,
  PRIMARY KEY (`NIF`));

CREATE TABLE `imobiliario`.`proprietario` (
  `NIF` INT NOT NULL,
  `NIFConjugue` INT NULL,
  `Nome` VARCHAR(255) NOT NULL,
  `Telefone` VARCHAR(255) NULL,
  `Email` VARCHAR(255) NULL,
  PRIMARY KEY (`NIF`),
  INDEX `FKProprietario1_idx` (`NIFConjugue` ASC) VISIBLE,
  CONSTRAINT `FKProprietario1`
    FOREIGN KEY (`NIFConjugue`)
    REFERENCES `imobiliario`.`conjugue` (`NIF`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

CREATE TABLE `imobiliario`.`imovel` (
  `ID` INT NOT NULL,
  `NIFProprietario` INT NOT NULL,
  `IDLocalizacao` INT NOT NULL,
  PRIMARY KEY (`ID`),
  INDEX `FKImovel1_idx` (`NIFProprietario` ASC) VISIBLE,
  CONSTRAINT `FKImovel1`
    FOREIGN KEY (`NIFProprietario`)
    REFERENCES `imobiliario`.`proprietario` (`NIF`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

ALTER TABLE `imobiliario`.`imovel` 
ADD INDEX `FKImovel2_idx` (`IDLocalizacao` ASC) VISIBLE;
;
ALTER TABLE `imobiliario`.`imovel` 
ADD CONSTRAINT `FKImovel2`
  FOREIGN KEY (`IDLocalizacao`)
  REFERENCES `imobiliario`.`localizacao` (`IDLocalizacao`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;


CREATE TABLE `imobiliario`.`angaria` (
  `NIFConsultor` INT NOT NULL,
  `IDImovel` INT NOT NULL,
  `DataEntrada` DATE NOT NULL,
  PRIMARY KEY (`NIFConsultor`),
  INDEX `FKAngaria2_idx` (`IDImovel` ASC) VISIBLE,
  CONSTRAINT `FKAngaria2`
    FOREIGN KEY (`IDImovel`)
    REFERENCES `imobiliario`.`imovel` (`ID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

ALTER TABLE `imobiliario`.`angaria` 
ADD CONSTRAINT `FKAngaria1`
  FOREIGN KEY (`NIFConsultor`)
  REFERENCES `imobiliario`.`consultor` (`NIF`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;

CREATE TABLE `imobiliario`.`consultor` (
  `NIF` INT NOT NULL,
  `IDAgencia` INT NOT NULL,
  `Nome` VARCHAR(255) NOT NULL,
  `Telefone` VARCHAR(255) NOT NULL,
  `Email` VARCHAR(255) NOT NULL,
  `LandingPage` VARCHAR(255) NULL,
  PRIMARY KEY (`NIF`));

ALTER TABLE `imobiliario`.`consultor` 
ADD INDEX `FKConsultor1_idx` (`IDAgencia` ASC) VISIBLE;
;
ALTER TABLE `imobiliario`.`consultor` 
ADD CONSTRAINT `FKConsultor1`
  FOREIGN KEY (`IDAgencia`)
  REFERENCES `imobiliario`.`agencia` (`IDAgencia`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;


CREATE TABLE `imobiliario`.`localizacao` (
  `IDLocalizacao` INT NOT NULL,
  `Rua` VARCHAR(255) NOT NULL,
  `Numero` INT NOT NULL,
  `Habitacao` VARCHAR(10) NOT NULL,
  `CEP` INT NOT NULL,
  `Freguesia` VARCHAR(255) NOT NULL,
  `Concelho` VARCHAR(255) NOT NULL,
  PRIMARY KEY (`IDLocalizacao`));

CREATE TABLE `imobiliario`.`agencia` (
  `IDAgencia` INT NOT NULL,
  `IDRede` INT NOT NULL,
  `IDLocalizacao` INT NOT NULL,
  `Nome` VARCHAR(255) NOT NULL,
  `LicencaAMI` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`IDAgencia`),
  INDEX `FKAgencia2_idx` (`IDLocalizacao` ASC) VISIBLE,
  CONSTRAINT `FKAgencia2`
    FOREIGN KEY (`IDLocalizacao`)
    REFERENCES `imobiliario`.`localizacao` (`IDLocalizacao`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

CREATE TABLE `imobiliario`.`rede_agencia` (
  `IDRede` INT NOT NULL,
  `DenSocial` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`IDRede`));

ALTER TABLE `imobiliario`.`agencia` 
ADD INDEX `FKAgencia1_idx` (`IDRede` ASC) VISIBLE;
;
ALTER TABLE `imobiliario`.`agencia` 
ADD CONSTRAINT `FKAgencia1`
  FOREIGN KEY (`IDRede`)
  REFERENCES `imobiliario`.`rede_agencia` (`IDRede`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;