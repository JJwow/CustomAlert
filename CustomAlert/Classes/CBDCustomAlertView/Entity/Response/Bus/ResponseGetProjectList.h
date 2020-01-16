//
//  ResponseGetProjectList.h
//  CarBaDa
//
//  Created by zhaitong on 16/7/6.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface projectTypeList : NSObject
@property (nonatomic, copy) NSString *levelType;//层级（1、2）
@property (nonatomic, copy) NSString *projectName;//项目名称
@property (nonatomic, copy) NSString *projectPic;//项目图片icon地址
@property (nonatomic, copy) NSString *projectType;//项目code
@property (nonatomic, copy) NSString *recIcon;//推荐图标
@property (nonatomic, copy) NSString *projectUrl;//TC项目入口
@end

@interface menuList : NSObject
@property (nonatomic, copy) NSString *menuType;//1 首页；2 本地生活；3 订单；4 我的；5:查询汽车票 ; 6:汽车票切换 ; 7:底部背景 ; 8:查询火车票 ; 9: 火车票切换 ; 10:查询机票 ; 11: 机票切换 ; 12: 查询汽车票NEW ; 13: 汽车票切换NEW ; 14: 查询火车票NEW ; 15:火车票切换NEW ;
@property (nonatomic, copy) NSString *selectedIcon;//选中图片
@property (nonatomic, copy) NSString *unselectedIcon;//未选中图片
@end

@interface ResponseGetProjectList : NSObject
@property (nonatomic, strong) NSArray *projectTypeList;
@property (nonatomic, strong) NSArray *menuList;//底部菜单列表
@property (nonatomic, strong) NSMutableArray *firstProjectList;//一层(非接口给)
@property (nonatomic, strong) NSMutableArray *secondProjectList;//二层(非接口给)
@end
