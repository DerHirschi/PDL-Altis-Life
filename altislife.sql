/*
Navicat MySQL Data Transfer

Source Server         : Root
Source Server Version : 50721
Source Host           : localhost:3306
Source Database       : altislife

Target Server Type    : MYSQL
Target Server Version : 50721
File Encoding         : 65001

Date: 2018-03-28 19:13:46
*/

SET FOREIGN_KEY_CHECKS=0;
-- ----------------------------
-- Table structure for `containers`
-- ----------------------------
DROP TABLE IF EXISTS `containers`;
CREATE TABLE `containers` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `pid` varchar(17) NOT NULL,
  `classname` varchar(32) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `inventory` text NOT NULL,
  `gear` text NOT NULL,
  `dir` varchar(128) DEFAULT NULL,
  `active` tinyint(1) NOT NULL DEFAULT '0',
  `owned` tinyint(1) DEFAULT '0',
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`,`pid`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Records of containers
-- ----------------------------
INSERT INTO `containers` VALUES ('1', '76561198146148666', 'B_supplyCrate_F', '[3545.28,13055.9,1.51758]', '\"[[],0]\"', '\"[[[],[]],[[],[]],[[],[]],[[],[]]]\"', '[[-0.80426,0.594277,0],[0,0,1]]', '0', '1', '2018-02-04 03:40:54');

-- ----------------------------
-- Table structure for `gangs`
-- ----------------------------
DROP TABLE IF EXISTS `gangs`;
CREATE TABLE `gangs` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `owner` varchar(32) DEFAULT NULL,
  `name` varchar(32) DEFAULT NULL,
  `members` text,
  `maxmembers` int(3) DEFAULT '8',
  `bank` int(100) DEFAULT '0',
  `active` tinyint(1) DEFAULT '1',
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  UNIQUE KEY `name_UNIQUE` (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Records of gangs
-- ----------------------------

-- ----------------------------
-- Table structure for `houses`
-- ----------------------------
DROP TABLE IF EXISTS `houses`;
CREATE TABLE `houses` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `pid` varchar(17) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `owned` tinyint(1) DEFAULT '0',
  `garage` tinyint(1) NOT NULL DEFAULT '0',
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`,`pid`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Records of houses
-- ----------------------------
INSERT INTO `houses` VALUES ('1', '76561198146148666', '[3548.32,13056.2,0.565099]', '1', '0', '2018-02-03 23:52:02');

-- ----------------------------
-- Table structure for `laden`
-- ----------------------------
DROP TABLE IF EXISTS `laden`;
CREATE TABLE `laden` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `pid` varchar(32) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `class` text,
  `inventory` text,
  `preistabelle` text,
  `kassen` text,
  `upgrade` text,
  `owned` tinyint(4) DEFAULT '0',
  `timestamp` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`,`pid`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of laden
-- ----------------------------
INSERT INTO `laden` VALUES ('3', '76561198146148666', '[3651.03,13060.9,0.00480652]', '\"Land_i_Shop_01_V3_F\"', '[\"Liga Laden\",0,0]', '[[[\"\",-1],[\"\",-1],[\"\",-1]]]', '[0]', '[[[[],0],[[],0],[[],0],[[],0],[[],0]]]', '1', '2018-02-06 02:36:46');
INSERT INTO `laden` VALUES ('4', '76561198146148666', '[3768.88,13105.7,-7.15256e-005]', '\"Land_Kiosk_blueking_F\"', '[\"Saft Laden\",1,1]', '[[[\"rabbit\",200],[\"redgull\",1],[\"uwsl\",1]]]', '[4]', '[[[[[\"apple\",3],[\"fireWo\",2]],15],[[[\"rabbit\",0],[\"apple\",2],[\"waterBottle\",4],[\"redgull\",0],[\"fireWo\",2],[\"pickaxe\",1],[\"uwsl\",0]],20]]]', '1', '2018-02-08 10:30:51');

-- ----------------------------
-- Table structure for `players`
-- ----------------------------
DROP TABLE IF EXISTS `players`;
CREATE TABLE `players` (
  `uid` int(6) NOT NULL AUTO_INCREMENT,
  `name` varchar(32) NOT NULL,
  `aliases` text NOT NULL,
  `pid` varchar(17) NOT NULL,
  `cash` int(100) NOT NULL DEFAULT '0',
  `bankacc` int(100) NOT NULL DEFAULT '0',
  `coplevel` enum('0','1','2','3','4','5','6','7') NOT NULL DEFAULT '0',
  `mediclevel` enum('0','1','2','3','4','5') NOT NULL DEFAULT '0',
  `alaclevel` enum('0','1','2','3','4','5') NOT NULL DEFAULT '0',
  `flusilevel` enum('0','1','2','3','4','5') NOT NULL DEFAULT '0',
  `civ_licenses` text NOT NULL,
  `cop_licenses` text NOT NULL,
  `med_licenses` text NOT NULL,
  `alac_licenses` text NOT NULL,
  `flusi_licenses` text NOT NULL,
  `civ_gear` text NOT NULL,
  `cop_gear` text NOT NULL,
  `med_gear` text NOT NULL,
  `alac_gear` text NOT NULL,
  `flusi_gear` text NOT NULL,
  `civ_stats` varchar(32) NOT NULL DEFAULT '"[100,100,0]"',
  `arrested` tinyint(1) NOT NULL DEFAULT '0',
  `adminlevel` enum('0','1','2','3','4','5') NOT NULL DEFAULT '0',
  `donorlevel` enum('0','1','2','3','4','5') NOT NULL DEFAULT '0',
  `blacklist` tinyint(1) NOT NULL DEFAULT '0',
  `civ_alive` tinyint(1) NOT NULL DEFAULT '0',
  `civ_position` varchar(64) NOT NULL DEFAULT '"[]"',
  `playtime` varchar(32) NOT NULL DEFAULT '"[0,0,0,0,0]"',
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `last_seen` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`uid`),
  UNIQUE KEY `pid` (`pid`),
  KEY `name` (`name`),
  KEY `blacklist` (`blacklist`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Records of players
-- ----------------------------
INSERT INTO `players` VALUES ('1', 'Mas Tobias', '\"[`Mas Tobias`]\"', '76561198146148666', '0', '-7450', '0', '0', '0', '0', '\"[[`license_civ_driver`,1],[`license_civ_boat`,1],[`license_civ_pilot`,1],[`license_civ_trucking`,1],[`license_civ_bigtrucking`,0],[`license_civ_gun`,0],[`license_civ_dive`,0],[`license_civ_home`,1],[`license_civ_oil`,0],[`license_civ_diamond`,0],[`license_civ_salt`,0],[`license_civ_sand`,0],[`license_civ_iron`,0],[`license_civ_copper`,0],[`license_civ_cement`,0],[`license_civ_medmarijuana`,0],[`license_civ_cocaine`,0],[`license_civ_heroin`,0],[`license_civ_marijuana`,0],[`license_civ_rebel`,0],[`license_civ_jobCop`,1],[`license_civ_jobMedic`,0],[`license_civ_jobAlac`,0],[`license_civ_jobFlusi`,0]]\"', '\"[[`license_cop_cAir`,0],[`license_cop_cg`,0]]\"', '\"[]\"', '\"[]\"', '\"[]\"', '\"[`U_O_Wetsuit`,`V_RebreatherIA`,`B_Carryall_oucamo`,`G_O_Diving`,``,[`ItemMap`,`ItemCompass`,`ItemWatch`],``,``,[],[],[],[],[],[],[``,``,``,``],[``,``,``,``],[]]\"', '\"[[]]\"', '\"[]\"', '\"[]\"', '\"[]\"', '\"[70,50,0]\"', '0', '0', '0', '0', '0', '\"[3611.62,12880.7,0]\"', '\"[133,24,192,0,0]\"', '2018-02-07 09:57:00', '2018-03-27 12:12:12');

-- ----------------------------
-- Table structure for `vehicles`
-- ----------------------------
DROP TABLE IF EXISTS `vehicles`;
CREATE TABLE `vehicles` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `side` varchar(16) NOT NULL,
  `classname` varchar(64) NOT NULL,
  `type` varchar(16) NOT NULL,
  `pid` varchar(17) NOT NULL,
  `alive` tinyint(1) NOT NULL DEFAULT '1',
  `blacklist` tinyint(1) NOT NULL DEFAULT '0',
  `active` tinyint(1) NOT NULL DEFAULT '0',
  `plate` int(20) NOT NULL,
  `color` int(20) NOT NULL,
  `inventory` text NOT NULL,
  `gear` text NOT NULL,
  `fuel` double NOT NULL DEFAULT '1',
  `damage` varchar(256) NOT NULL,
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `side` (`side`),
  KEY `pid` (`pid`),
  KEY `type` (`type`)
) ENGINE=InnoDB AUTO_INCREMENT=25 DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Records of vehicles
-- ----------------------------
INSERT INTO `vehicles` VALUES ('2', 'civ', 'C_Heli_Light_01_civil_F', 'Air', '76561198146148666', '0', '0', '0', '683172', '11', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-01-30 09:48:43');
INSERT INTO `vehicles` VALUES ('3', 'civ', 'C_Heli_Light_01_civil_F', 'Air', '76561198146148666', '1', '0', '0', '396134', '11', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-01-30 09:51:51');
INSERT INTO `vehicles` VALUES ('4', 'civ', 'C_Heli_Light_01_civil_F', 'Air', '76561197971487784', '1', '0', '0', '176579', '5', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-01-30 09:52:30');
INSERT INTO `vehicles` VALUES ('5', 'civ', 'B_Heli_Light_01_F', 'Air', '76561198146148666', '0', '0', '0', '577568', '4', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-01-31 12:03:56');
INSERT INTO `vehicles` VALUES ('6', 'civ', 'B_Heli_Light_01_F', 'Air', '76561198146148666', '1', '0', '0', '939816', '2', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-01-31 12:06:07');
INSERT INTO `vehicles` VALUES ('7', 'civ', 'B_Truck_01_transport_F', 'Car', '76561198146148666', '1', '0', '0', '602349', '0', '\"[[],0]\"', '\"[]\"', '0.298198', '\"[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]\"', '2018-02-02 02:36:34');
INSERT INTO `vehicles` VALUES ('8', 'civ', 'B_Quadbike_01_F', 'Car', '76561198146148666', '1', '0', '0', '387556', '7', '\"[[[`redgull`,2],[`pickaxe`,1]],4]\"', '\"[]\"', '0.999572', '\"[]\"', '2018-02-02 02:37:28');
INSERT INTO `vehicles` VALUES ('9', 'civ', 'C_Offroad_01_F', 'Car', '76561198146148666', '1', '0', '0', '973675', '0', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 02:38:31');
INSERT INTO `vehicles` VALUES ('10', 'civ', 'B_Quadbike_01_F', 'Car', '76561198146148666', '1', '0', '0', '812212', '2', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 06:25:10');
INSERT INTO `vehicles` VALUES ('11', 'civ', 'C_Offroad_02_unarmed_F', 'Car', '76561198146148666', '1', '0', '0', '910323', '0', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 06:58:46');
INSERT INTO `vehicles` VALUES ('12', 'civ', 'C_Offroad_02_unarmed_F', 'Car', '76561198146148666', '1', '0', '0', '454676', '0', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 07:21:02');
INSERT INTO `vehicles` VALUES ('13', 'civ', 'C_Van_01_transport_F', 'Car', '76561198146148666', '1', '0', '0', '458303', '1', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 07:21:21');
INSERT INTO `vehicles` VALUES ('14', 'civ', 'C_Offroad_02_unarmed_F', 'Car', '76561198146148666', '1', '0', '0', '959030', '0', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 07:35:19');
INSERT INTO `vehicles` VALUES ('15', 'civ', 'B_Quadbike_01_F', 'Car', '76561198146148666', '1', '0', '0', '201554', '7', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 07:39:13');
INSERT INTO `vehicles` VALUES ('16', 'civ', 'C_SUV_01_F', 'Car', '76561198146148666', '1', '0', '0', '216831', '14', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 07:40:35');
INSERT INTO `vehicles` VALUES ('17', 'cop', 'B_Truck_01_mover_F', 'Car', '76561198146148666', '1', '0', '0', '242381', '1', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 08:12:02');
INSERT INTO `vehicles` VALUES ('18', 'cop', 'B_MRAP_01_F', 'Car', '76561198146148666', '1', '0', '0', '483395', '1', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 08:12:40');
INSERT INTO `vehicles` VALUES ('19', 'cop', 'B_MRAP_01_F', 'Car', '76561198146148666', '1', '0', '0', '568067', '2', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 08:12:47');
INSERT INTO `vehicles` VALUES ('20', 'cop', 'B_MRAP_01_F', 'Car', '76561198146148666', '1', '0', '0', '376724', '0', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 08:13:16');
INSERT INTO `vehicles` VALUES ('21', 'civ', 'B_T_VTOL_01_vehicle_blue_F', 'Air', '76561198146148666', '1', '0', '0', '37638', '0', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 08:15:23');
INSERT INTO `vehicles` VALUES ('22', 'cop', 'C_SUV_01_F', 'Car', '76561198146148666', '1', '0', '0', '815542', '11', '\"[[],0]\"', '\"[]\"', '1', '\"[]\"', '2018-02-02 12:21:20');
INSERT INTO `vehicles` VALUES ('23', 'civ', 'B_Heli_Light_01_F', 'Air', '76561198146148666', '0', '0', '0', '41024', '12', '\"[[],0]\"', '\"[]\"', '0.866851', '\"[]\"', '2018-03-24 14:31:42');
INSERT INTO `vehicles` VALUES ('24', 'civ', 'O_Heli_Transport_04_F', 'Air', '76561198146148666', '1', '0', '0', '808414', '5', '\"[[],0]\"', '\"[]\"', '0.987308', '\"[]\"', '2018-03-24 14:32:30');

-- ----------------------------
-- Table structure for `wanted`
-- ----------------------------
DROP TABLE IF EXISTS `wanted`;
CREATE TABLE `wanted` (
  `wantedID` varchar(64) NOT NULL,
  `wantedName` varchar(32) NOT NULL,
  `wantedCrimes` text NOT NULL,
  `wantedBounty` int(100) NOT NULL,
  `active` tinyint(1) NOT NULL DEFAULT '0',
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`wantedID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Records of wanted
-- ----------------------------
INSERT INTO `wanted` VALUES ('76561198146148666', 'Mas Tobias', '\"[`18`,`215`,`215`,`215`,`215`,`215`]\"', '2500', '1', '2018-02-03 23:44:20');

-- ----------------------------
-- Procedure structure for `deleteDeadVehicles`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteDeadVehicles`;
DELIMITER ;;
CREATE DEFINER=`arma3`@`localhost` PROCEDURE `deleteDeadVehicles`()
BEGIN
  DELETE FROM `vehicles` WHERE `alive` = 0;
END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `deleteOldContainers`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldContainers`;
DELIMITER ;;
CREATE DEFINER=`arma3`@`localhost` PROCEDURE `deleteOldContainers`()
BEGIN
  DELETE FROM `containers` WHERE `owned` = 0;
END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `deleteOldGangs`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldGangs`;
DELIMITER ;;
CREATE DEFINER=`arma3`@`localhost` PROCEDURE `deleteOldGangs`()
BEGIN
  DELETE FROM `gangs` WHERE `active` = 0;
END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `deleteOldHouses`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldHouses`;
DELIMITER ;;
CREATE DEFINER=`arma3`@`localhost` PROCEDURE `deleteOldHouses`()
BEGIN
  DELETE FROM `houses` WHERE `owned` = 0;
END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `deleteOldWanted`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldWanted`;
DELIMITER ;;
CREATE DEFINER=`arma3`@`localhost` PROCEDURE `deleteOldWanted`()
BEGIN
  DELETE FROM `wanted` WHERE `active` = 0;
END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `resetLifeVehicles`
-- ----------------------------
DROP PROCEDURE IF EXISTS `resetLifeVehicles`;
DELIMITER ;;
CREATE DEFINER=`arma3`@`localhost` PROCEDURE `resetLifeVehicles`()
BEGIN
  UPDATE `vehicles` SET `active`= 0;
END
;;
DELIMITER ;
