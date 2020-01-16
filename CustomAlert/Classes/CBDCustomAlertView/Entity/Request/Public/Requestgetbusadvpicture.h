//
//  Requestgetbusadvpicture.h
//  CarBaDa
//
//  Created by Alex on 15/7/1.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface Requestgetbusadvpicture : TCTRequestObject

@property (nonatomic,strong) NSString *projectType;//项目类型 使用ProjectType枚举
@property (nonatomic,strong) NSString *dataNum;
@property (nonatomic,strong) NSString *city;
@property (nonatomic,strong) NSString *adPicType;//广告图类型 启动页传4，悬浮广告传7，其他情况不传
@property (nonatomic,strong) NSString *registerState;//用户注册状态（0：全部用户；1：未注册用户）

@property (nonatomic, strong) NSString *isReturnUnable;//是否返回未生效的广告（0、不返回，1、返回）
@end
