//
//  ResponseGetCityIntMaillList.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/7/31.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface singleProductList : NSObject
@property (nonatomic, copy) NSString *singleProductId;//单品id
@property (nonatomic, copy) NSString *singleProductName;//单品
@property (nonatomic, copy) NSString *typeName;//商品类型，例如：抽奖、红包、实物、兑换码
@property (nonatomic, copy) NSString *smallMap;//图片
@property (nonatomic, copy) NSString *bonusPoints;//消耗积分数
@property (nonatomic, copy) NSString *addPrice;//附加金额
@property (nonatomic, copy) NSString *everyPoints;//
@property (nonatomic, copy) NSString *sponsor;//赞助商名称
@property (nonatomic, copy) NSString *discountMode;//等级优惠方式，0-无等级优惠，1-等级特惠;2-等级专享
@property (nonatomic, copy) NSString *discountLevel;//最低享受优惠等级名称
@property (nonatomic, copy) NSString *label;//标签
@property (nonatomic, copy) NSString *payment;//领取方式，0抽奖 1兑换
@property (nonatomic, copy) NSString *preSaleDate;//预售时间，格式：yyyy-MM-dd HH:mm:ss.fff
@property (nonatomic, copy) NSString *saleState;//销售状态，0:可预定，1：抢光啦，2：补货中，3：预售
@property (nonatomic, copy) NSString *saleStateName;
@property (nonatomic, copy) NSString *referencePrice;//参考价

@property (nonatomic, copy) NSString * additionalAmount;//附加金额
@property (nonatomic, copy) NSString * classifyName;//分类名称
@property (nonatomic, copy) NSString * commodityName;//商品名称
@property (nonatomic, copy) NSString * freeMail;//是否免邮0否1是
@property (nonatomic, copy) NSString * freight;//运费
@property (nonatomic, copy) NSString * frequencyLimit;//兑换次数限制
@property (nonatomic, copy) NSString * fullPointsBeExchange;//    满多少积分可兑换
@property (nonatomic, copy) NSString * isSellOut;//商品售罄 0售罄 1在售
@property (nonatomic, copy) NSString * singleProductType;//小图
@property (nonatomic, copy) NSString *picUrl;//大图

@end


@interface ResponseGetCityIntMaillList : NSObject
@property (nonatomic, copy) NSArray *singleProductList;//单品列表

@end
