//
//  ResponseGetHotelDetail.h
//  CarBaDa
//
//  Created by likaikun on 2017/4/18.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "ResponseGetHotelList.h"
#import "ResponseUnionOrderDetail.h"

@interface facilityList : NSObject
@property (nonatomic, copy) NSString *facilityImage;//酒店设施图片地址
@property (nonatomic, copy) NSString *facilityName;//酒店设施名称
@end

@interface share : NSObject
@property (nonatomic, copy) NSString *shTitle;//分享标题
@property (nonatomic, copy) NSString *shLink;//分享地址
@property (nonatomic, copy) NSString *shContent;//分享内容
@end

@interface ResponseGetHotelDetail : TCTResponseObject
@property (nonatomic, copy) NSString *resourceId;//酒店id
@property (nonatomic, copy) NSString *resourceName;//酒店名称
@property (nonatomic, copy) NSString *gradeId;//酒店等级
@property (nonatomic, copy) NSString *gradeName;//资源等级说明
@property (nonatomic, copy) NSString *address;//酒店地址
@property (nonatomic, copy) NSString *phone;//酒店电话
@property (nonatomic, copy) NSString *cityId;//酒店所在城市id
@property (nonatomic, copy) NSString *sectionId;//区县id
@property (nonatomic, copy) NSString *cityName;//城市名称
@property (nonatomic, copy) NSString *sectionName;//区县名称
@property (nonatomic, copy) NSString *lat;//纬度 百度
@property (nonatomic, copy) NSString *lon;//经度 百度
@property (nonatomic, copy) NSString *shortIntro;//一句话介绍
@property (nonatomic, copy) NSString *arrivalAndDeparture;//入住和离店
@property (nonatomic, copy) NSString *isActive;//是否有效(1：有效；0：无效)
@property (nonatomic, copy) NSString *imageUrl;//酒店图片
@property (nonatomic, copy) NSString *imageCount;//图片张数
@property (nonatomic, copy) NSString *facilityBaseUrl;//酒店设施图片
@property (nonatomic, copy) NSString *creditCardsName;//可支持的银行卡名称
@property (nonatomic, copy) NSString *cmtScore;//评分
@property (nonatomic, copy) NSString *cmtLabel;//语意标签（多个逗号分隔）
@property (nonatomic, copy) NSString *cmtNum;//点评总数
@property (nonatomic, copy) NSString *cmtScorems;//点评标签
@property (nonatomic, copy) NSString *isFollow;//是否收藏（1、是，0、否）
@property (nonatomic, strong) NSArray *cmtLabelList;//语意标签

@property (nonatomic, strong) share *share;//分享
@property (nonatomic, strong) NSArray *roomFilterList;//房型筛选
@property (nonatomic, copy) NSArray *facilityCategorys;//设施类别列表
@property (nonatomic, strong) NSArray *roomList;//房型信息
@property (nonatomic, strong) NSArray *imageList;//图片信息

@property (nonatomic, copy) NSString *childDescription;//儿童政策说明
@property (nonatomic, copy) NSString *petDescription;//宠物说明

//@property (nonatomic, copy) NSString *creditCardsId;//可支持的银行卡

@end

@interface roomList : NSObject
@property (nonatomic, copy) NSString *resourceProductId;//房型ID
@property (nonatomic, copy) NSString *resourceProductImage;//房型图片
@property (nonatomic, copy) NSString *bedTypeName;//床型
@property (nonatomic, copy) NSString *roomSize;//房型面积
@property (nonatomic, copy) NSString *resourceProductName;//房型名称
@property (nonatomic, copy) NSString *minPrice;//最小价
@property (nonatomic, strong) NSArray *priceList;//价格信息
@property (nonatomic, copy) NSString *isSellOut;//是否已售完（1、售完）


//@property (nonatomic, copy) NSString *bedSize;//床宽
@property (nonatomic, copy) NSString *resourceProductImages;//房型图片用逗号分隔

- (roomList*)initWithRoomList:(roomList*)room withPriceList:(NSArray*)priceList;

@end

@interface cmtLabelList : themes

@end

@interface imageList : NSObject

@property (nonatomic, copy) NSString *categoryId;
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, strong) NSArray *resourceImage;

@end

@interface resourceImage : NSObject
@property (nonatomic, copy) NSString *imageName;//图片名称

@property (nonatomic, copy) NSString *imageUrl;//图片地址
@property (nonatomic, copy) NSString *bigImageUrl;//大图地址

@property (nonatomic, copy) NSString *sort;//排序
@property (nonatomic, copy) NSString *remark;//备注
@property (nonatomic, copy) NSString *imageLabel;//标签
@property (nonatomic, copy) NSString *isDefault;//是否酒店默认
@property (nonatomic, copy) NSString *isProDefault;//是否房型默认
@property (nonatomic, copy) NSString *proId;//房型ID
@end


@interface priceList : NSObject

@property (nonatomic, copy) NSString *productUniqueId;//政策ID
@property (nonatomic, copy) NSString *productUniquePriceName;//政策名
@property (nonatomic, copy) NSString *price;//价格
@property (nonatomic, copy) NSString *paymentType;//2、在线付，1、到店付
@property (nonatomic, copy) NSString *hasWindows;//是否有窗（0：无，1： 有，2：部分有窗）
@property (nonatomic, copy) NSString *breakfast;//含早
@property (nonatomic, copy) NSString *isSellOut;//是否已售完（1、售完）

@property (nonatomic, copy) NSArray *labels;//标签
@property (nonatomic, copy) NSString *Sort;
@property (nonatomic, copy) NSString *roomFilterIds;//政策筛选
@property (nonatomic, copy) NSString *cancelLimitdes;//限时取消描述
@property (nonatomic, copy) NSString *salePrice;//减免后的价格
@property (nonatomic, copy) NSString *losePrice;//优惠价格
@property (nonatomic, copy) NSString *roomTypeId;//房型编号(创建订单时候需要)【艺龙新增】

@property (nonatomic, copy) NSString *isGuarantee;//是否担保[担保不需要做可定的检查]（0.不是 1.是）

//470w网约车添加
@property (nonatomic, strong) NSString *brandImg;
@property (nonatomic, strong) NSString *totalPrice;
@property (nonatomic, strong) NSString *discountAmount; //优惠价格
@property (nonatomic, strong) NSString *brandId; //品牌id
@property (nonatomic, strong) NSString *priceCode; //运价编码
@property (nonatomic, strong) NSString *brandType; //0 巴管；1同程 2 曹操 3 神州 4 首汽 5滴滴 6滴答
@property (nonatomic, strong) NSString *brandName;
@property (nonatomic, strong) NSString *priceMode; //  0 预估价； 1 一口价
@property (nonatomic, strong) NSMutableArray *priceDetail;
@property (nonatomic, strong) NSString *carTypeName; //车型名称
@property (nonatomic, strong) NSString *ctid;
@property (nonatomic, strong) NSString *ctCode;
@property (nonatomic, strong) NSString *carTypeCode;
@property (nonatomic, strong) NSString *originPrice; //原价
@property (nonatomic, strong) NSString *allowance; //巴管折扣金额
@property (nonatomic, strong) NSString *allowanceAmount; //供应商折扣金额
@property (nonatomic, strong) NSString *useType; //1出租车
//520拼车
@property (nonatomic, strong) NSString *advanceTime;
@property (nonatomic, strong) NSString *saleDays; 
@property (nonatomic, strong) NSString *saleBegin;
@property (nonatomic, strong) NSString *dptPassRange;
@property (nonatomic, strong) NSString *arrPassRange;
@property (nonatomic, strong) NSString *payMode;
@property (nonatomic, strong) NSString *showViewRange;
@property (nonatomic, strong) NSString *lineId;//线路Id
//531平车
@property (nonatomic, strong) NSString *cpDptCity; //拼车出发城市
@property (nonatomic, strong) NSString *cpDptCityCode; //拼车出发城市编码
@property (nonatomic, strong) NSString *cpArrCity;
@property (nonatomic, strong) NSString *cpArrCityCode;
//531滴答
@property (nonatomic, strong) NSString *totalPriceShow;
@property (nonatomic, strong) NSString *brandSummary;
@end



@interface labels : NSObject

@property (nonatomic, copy) NSString *fontColor;//字段颜色
@property (nonatomic, copy) NSString *frameColor;//边框颜色
@property (nonatomic, copy) NSString *typeName;//

@property (nonatomic, copy) NSString *backgroundColor;//背景色

@property (nonatomic, copy) NSString *title;//标签名称
@property (nonatomic, copy) NSString *content;//描述
@end



@interface facilityCategorys : NSObject

@property (nonatomic, copy) NSString *CategoryName;//设施类别名称
@property (nonatomic, copy) NSArray *facilityServices;//设施集合

@end

@interface facilityServices : NSObject
@property (nonatomic, copy) NSString *facilityServicesImageUrl;//设施图片
@property (nonatomic, copy) NSString *facilityServicesName;//设施名称
@property (nonatomic, copy) NSString *facilityCategoryTitle;//设施类别

@property (nonatomic, copy) NSString *facilityServiceName;//设施名称

@property (nonatomic, copy) NSString *isUsual;//是否是经常使用的设施（0：否；1：是）
@property (nonatomic, copy) NSArray *facilityList;//设施列表

@end

@interface roomFilterList : NSObject
@property (nonatomic, copy) NSString *filterGroup;//筛选分组
@property (nonatomic, copy) NSString *filterId;//筛选
@property (nonatomic, copy) NSString *filterSelect;//是否选中（1选中、0、不选中）
@property (nonatomic, copy) NSString *filterName;//筛选名称
@end

