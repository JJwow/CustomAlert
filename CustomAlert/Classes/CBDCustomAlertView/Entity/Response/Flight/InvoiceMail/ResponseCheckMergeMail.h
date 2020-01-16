//
//  ResponseCheckMergeMail.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/11/29.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseCheckMergeMail : TCTResponseObject

@property (nonatomic, strong) NSString *mailSerialid; //邮寄流水号
@property (nonatomic, strong) NSString *postDate; //预计邮寄日期(格式YYYY-MM-dd)
@property (nonatomic, strong) NSString *orderSerialId;//订单流水号

@end

NS_ASSUME_NONNULL_END
