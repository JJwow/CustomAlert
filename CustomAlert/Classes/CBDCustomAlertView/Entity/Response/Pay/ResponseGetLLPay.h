//
//  ResponseGetLLPay.h
//  CarBaDa
//
//  Created by Alex on 15/8/3.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface risk_item : NSObject
@property (nonatomic,copy) NSString *frms_ware_category;
@property (nonatomic,copy) NSString *user_info_dt_register;
@property (nonatomic,copy) NSString *user_info_mercht_userno;

@end

@interface payContent : NSObject
@property (nonatomic,copy) NSString *busi_partner;
@property (nonatomic,copy) NSString *dt_order;
@property (nonatomic,copy) NSString *info_order;
@property (nonatomic,copy) NSString *money_order;
@property (nonatomic,copy) NSString *name_goods;
@property (nonatomic,copy) NSString *no_order;
@property (nonatomic,copy) NSString *notify_url;
@property (nonatomic,copy) NSString *oid_partner;
@property (nonatomic,strong) risk_item *risk_item;
@property (nonatomic,copy) NSString *sign;
@property (nonatomic,copy) NSString *sign_type;
@property (nonatomic,copy) NSString *user_id;
@property (nonatomic,copy) NSString *valid_order;
@property (nonatomic,copy) NSString *card_no;
@property (nonatomic,copy) NSString *ap_merchant_id;
@property (nonatomic,copy) NSString *platform;
@property (nonatomic,copy) NSString *no_agree;

//特供同程金服
@property (nonatomic,copy) NSString *appId;
@property (nonatomic,copy) NSString *bizOrderId;
@property (nonatomic,copy) NSString *businessType;
@property (nonatomic,copy) NSString *goodsName;
@property (nonatomic,copy) NSString *merchantId;
@property (nonatomic,copy) NSString *notifyUrl;
@property (nonatomic,copy) NSString *orderAmount;
//@property (nonatomic,copy) NSString *platform;
@property (nonatomic,copy) NSString *riskInfo;
@property (nonatomic,copy) NSString *userId;
@end

@interface ResponseGetLLPay : NSObject
@property (nonatomic,strong) payContent *payContent;
@end
