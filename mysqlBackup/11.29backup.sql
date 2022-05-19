/*
MySQL Backup
Database: librarymanagement
Backup Time: 2021-11-29 12:51:17
*/

SET FOREIGN_KEY_CHECKS=0;
DROP TABLE IF EXISTS `librarymanagement`.`book`;
DROP TABLE IF EXISTS `librarymanagement`.`lend`;
DROP TABLE IF EXISTS `librarymanagement`.`store`;
DROP TABLE IF EXISTS `librarymanagement`.`user`;
CREATE TABLE `book` (
  `isbn` varchar(255) NOT NULL,
  `writer` varchar(255) DEFAULT NULL,
  `bookName` varchar(255) DEFAULT NULL,
  `publisher` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`isbn`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
CREATE TABLE `lend` (
  `username` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `isbn` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `borrowDate` datetime DEFAULT NULL,
  `returnDate` datetime DEFAULT NULL,
  PRIMARY KEY (`username`,`isbn`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
CREATE TABLE `store` (
  `isbn` varchar(255) DEFAULT NULL,
  `bookshelf` varchar(255) DEFAULT NULL,
  `room` varchar(255) DEFAULT NULL,
  `library` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
CREATE TABLE `user` (
  `username` varchar(20) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `password` varchar(20) DEFAULT NULL,
  `identity` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`username`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
BEGIN;
LOCK TABLES `librarymanagement`.`book` WRITE;
DELETE FROM `librarymanagement`.`book`;
INSERT INTO `librarymanagement`.`book` (`isbn`,`writer`,`bookName`,`publisher`) VALUES ('8787530210291', '[英]乔治·奥威尔', '1984', '北京十月文艺出版社'),('9787020024759', '钱钟书', '围城 ', '人民文学出版社'),('9787020049295', '路遥', '平凡的世界（全三部） ', '人民文学出版社'),('9787111561279', 'randal E. Bryant', '深入理解计算机系统', '机械工业出版社'),('9787208061644', '[美]卡勒德·胡赛尼', '追风筝的人 ', '上海人民出版社'),('9787302227984', '郑莉', 'c++程序设计', '清华大学出版社'),('9787532731077', '[捷克]米兰·昆德拉', '不能承受的生命之轻 ', '上海译文出版社'),('9787532739547', '[英]威廉·萨默塞特·毛姆', '月亮和六便士 ', '上海译文出版社'),('9787532740086', '[俄]费奥多尔·陀思妥耶夫斯基', '卡拉马佐夫兄弟 ', '上海译文出版社'),('9787532741731', '[英]威廉·萨默塞特·毛姆', '人生的枷锁 ', '上海译文出版社'),('9787532741922', '[英]威廉·萨默塞特·毛姆', '刀锋 ', '上海译文出版社'),('9787532751471', '[法]阿尔贝·加缪', '局外人 ', '上海译文出版社'),('9787544210966', '余华', '活着 ', '南海出版公司');
UNLOCK TABLES;
COMMIT;
BEGIN;
LOCK TABLES `librarymanagement`.`lend` WRITE;
DELETE FROM `librarymanagement`.`lend`;
INSERT INTO `librarymanagement`.`lend` (`username`,`isbn`,`borrowDate`,`returnDate`) VALUES ('20201036', '9787111561279', '2021-11-27 16:42:49', '2021-12-27 16:43:04');
UNLOCK TABLES;
COMMIT;
BEGIN;
LOCK TABLES `librarymanagement`.`store` WRITE;
DELETE FROM `librarymanagement`.`store`;
INSERT INTO `librarymanagement`.`store` (`isbn`,`bookshelf`,`room`,`library`) VALUES ('9787111561279', 'TP311.1316-4', '西语中心', '老图书馆'),('9787302227984', 'TP316.81181-2', '科技借阅室', '新图书馆');
UNLOCK TABLES;
COMMIT;
BEGIN;
LOCK TABLES `librarymanagement`.`user` WRITE;
DELETE FROM `librarymanagement`.`user`;
INSERT INTO `librarymanagement`.`user` (`username`,`password`,`identity`) VALUES ('2005172', '111111', 'librarian'),('20201001', '111111', 'reader'),('20201036', '123456', 'reader'),('admin', 'admin', 'admin');
UNLOCK TABLES;
COMMIT;
