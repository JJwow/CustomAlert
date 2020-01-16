//
//  ResponseHotelPolicyDetail.h
//  CarBaDa
//
//  Created by likaikun on 2017/4/21.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"


@class facilityServices, lables;
@interface ResponseHotelPolicyDetail : TCTResponseObject

@property (nonatomic, strong)NSArray *facilityServices;
@property (nonatomic, copy) NSString *ifBooking;	//	是否可预定（0.不可预定，1.可以预定）
@property (nonatomic, copy) NSString *isSuccess;	//
@property (nonatomic, copy) NSString *price;	//	价格
@property (nonatomic, copy) NSString *productName;	//	房型名称
@property (nonatomic, copy) NSArray *roomImage;	//	房型图片集合
@property (nonatomic, copy) NSArray *roomInfo;//房型集合

@property (nonatomic, copy) NSString *cancelType;//取消规则类型1、免费取消2、限时取消3、不可取消
@property (nonatomic, copy) NSString *cancelTitle;//取消规则标题1、免费取消2、限时取消3、不可取消
@property (nonatomic, copy) NSString *cancelContent;//取消内容说明
@property (nonatomic, copy) NSString *remark;//备注信息
@property (nonatomic, copy) NSString *facilityBaseUrl;//酒店设施图片基础地址

@property (nonatomic, copy) NSArray *labels;//标签列表
@end

@interface roomInfo : NSObject

@property (nonatomic, copy) NSString *infoKey;//	房型早餐、宽带等信息
@property (nonatomic, copy) NSString *infoValue;//	房型早餐、宽带内容
@property (nonatomic, copy) NSString *infoUrl;//房间内容图片地址
@end

@interface roomImage : NSObject

@property (nonatomic, copy) NSString *imageName;//图片名称
@property (nonatomic, copy) NSString *imageUrl;//图片路径

@end


