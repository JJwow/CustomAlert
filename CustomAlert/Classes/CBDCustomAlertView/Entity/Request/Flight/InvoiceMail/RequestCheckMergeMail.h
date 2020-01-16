//
//  RequestCheckMergeMail.h
//  CarBaDa
//  机票合并邮寄检测
//  Created by lkk42286 on 2019/11/29.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestCheckMergeMail : TCTRequestObject

@property (nonatomic, strong) NSString *memberId; //会员ID
@property (nonatomic, strong) NSString *depDate; //起飞日期(格式YYYY-MM-dd)
@property (nonatomic, strong) NSString *province; //省
@property (nonatomic, strong) NSString *city; //市
@property (nonatomic, strong) NSString *area; //区
@property (nonatomic, strong) NSString *address; //地址
@property (nonatomic, strong) NSString *linkman; //收件人
@property (nonatomic, strong) NSString *phone; //收件人联系号码

@end

NS_ASSUME_NONNULL_END
