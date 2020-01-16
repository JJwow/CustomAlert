//
//  RequestActivityPackageList.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/8/22.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestActivityPackageList : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *projectType;
@property (nonatomic, copy) NSString *showPage;//展示页面 0 支付成功页；1 酒店列表页 2:机场接送首页,3:拼车首页，4：网约车
@property (nonatomic, copy) NSString *city;//限制城市

@end
