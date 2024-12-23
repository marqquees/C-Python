CREATE TABLE `imobiliara`.`conjugue` (
  `NIF` INT NOT NULL,
  `Nome` VARCHAR(255) NOT NULL,
  `Telefone` VARCHAR(255) NULL,
  `Email` VARCHAR(255) NULL,
  PRIMARY KEY (`NIF`));


CREATE TABLE `imobiliara`.`proprietario` (
  `NIF` INT NOT NULL,
  `NIFConjugue` INT NULL,
  `Nome` VARCHAR(255) NOT NULL,
  `Telefone` VARCHAR(255) NULL,
  `Email` VARCHAR(255) NULL,
  PRIMARY KEY (`NIF`),
  INDEX `FK1_idx` (`NIFConjugue` ASC) VISIBLE,
  CONSTRAINT `FKProprietario1`
    FOREIGN KEY (`NIFConjugue`)
    REFERENCES `imobiliara`.`conjugue` (`NIF`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

CREATE TABLE `imobiliara`.`imovel` (
  `uniqueId` INT NOT NULL,
  `NIFProprietario` INT NOT NULL,
  `IDLocalizacao` INT NOT NULL,
  PRIMARY KEY (`uniqueId`),
  INDEX `FK1_idx` (`NIFProprietario` ASC) VISIBLE,
  CONSTRAINT `FKImovel1`
    FOREIGN KEY (`NIFProprietario`)
    REFERENCES `imobiliara`.`proprietario` (`NIF`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

CREATE TABLE `imobiliara`.`localizacao` (
  `IdLocalizacao` INT NOT NULL,
  `NIFProprietario` INT NOT NULL,
  `Zona` VARCHAR(255) NULL,
  `Freguesia` VARCHAR(255) NULL,
  `Concelho` VARCHAR(255) NULL,
  `Distrito` VARCHAR(255) NULL,
  PRIMARY KEY (`IdLocalizacao`));

CREATE TABLE `imobiliara`.`angaria` (
  `NIFConsultor` INT NOT NULL,
  `IdImovel` INT NOT NULL,
  `DataEntrada` DATE NOT NULL,
  PRIMARY KEY (`NIFConsultor`),
  INDEX `FKAngaria2_idx` (`IdImovel` ASC) VISIBLE,
  CONSTRAINT `FKAngaria2`
    FOREIGN KEY (`IdImovel`)
    REFERENCES `imobiliara`.`imovel` (`uniqueId`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

ALTER TABLE `imobiliara`.`angaria` 
ADD CONSTRAINT `FKAngaria1`
  FOREIGN KEY (`NIFConsultor`)
  REFERENCES `imobiliara`.`consultor` (`NIF`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;

CREATE TABLE `imobiliara`.`consultor` (
  `NIF` INT NOT NULL,
  `IdAgencia` INT NOT NULL,
  `Nome` VARCHAR(255) NOT NULL,
  `Telefone` VARCHAR(45) NULL,
  `Email` VARCHAR(255) NULL,
  `LoadingPage` VARCHAR(255) NULL,
  PRIMARY KEY (`NIF`));

ALTER TABLE `imobiliara`.`consultor` 
ADD INDEX `FKConsultor1_idx` (`IdAgencia` ASC) VISIBLE;
;
ALTER TABLE `imobiliara`.`consultor` 
ADD CONSTRAINT `FKConsultor1`
  FOREIGN KEY (`IdAgencia`)
  REFERENCES `imobiliara`.`agencia` (`IdAgencia`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;

CREATE TABLE `imobiliara`.`agencia` (
  `IdAgencia` INT NOT NULL,
  `IdRede` INT NOT NULL,
  `IdLocalizacao` INT NOT NULL,
  `Nome` VARCHAR(200) NOT NULL,
  `Morada` VARCHAR(200) NOT NULL,
  `LicencaAMI` VARCHAR(50) NOT NULL,
  PRIMARY KEY (`IdAgencia`),
  INDEX `FKAgencia2_idx` (`IdLocalizacao` ASC) VISIBLE,
  CONSTRAINT `FKAgencia2`
    FOREIGN KEY (`IdLocalizacao`)
    REFERENCES `imobiliara`.`localizacao` (`IdLocalizacao`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

ALTER TABLE `imobiliara`.`agencia` 
ADD INDEX `FKAgencia1_idx` (`IdRede` ASC) VISIBLE;
;
ALTER TABLE `imobiliara`.`agencia` 
ADD CONSTRAINT `FKAgencia1`
  FOREIGN KEY (`IdRede`)
  REFERENCES `imobiliara`.`rede_agencia` (`IdRede`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;

CREATE TABLE `imobiliara`.`rede_agencia` (
  `IdRede` INT NOT NULL,
  `DenSocial` VARCHAR(255) NOT NULL,
  PRIMARY KEY (`IdRede`));

