//
//  RequestUpdate12306Account.h
//  CarBaDa
//
//  Created by zhaitong on 2019/8/22.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestUpdate12306Account : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *accountNo;
@property (nonatomic, copy) NSString *passengerName;
@property (nonatomic, copy) NSString *certType;//证件类型 1:二代身份证 2:护照 3:一代身份证 4:外国人民居住证 6:港澳通行证 7:台胞通行证
@property (nonatomic, copy) NSString *certNo;
@property (nonatomic, copy) NSString *passengerType;//乘客类型 1 成人 2儿童 3 学生
@end

NS_ASSUME_NONNULL_END
