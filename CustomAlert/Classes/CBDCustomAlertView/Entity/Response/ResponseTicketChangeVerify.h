//
//  ResponseTicketChangeVerify.h
//  CarBaDa
//
//  Created by zhaitong on 16/8/31.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseTicketChangeVerify : NSObject
@property (nonatomic, copy) NSString *isCanChange;//能否改签 0：否 1:可以改签
@property (nonatomic, copy) NSString *failMsg;//失败原因
@property (nonatomic, copy) NSString *isSuccess;//1:成功
@property (nonatomic, copy) NSString *saleDays;//预售期天数
@property (nonatomic, copy) NSString *studentStartDay;//学生票改签起始日期
@property (nonatomic, copy) NSString *studentSaleDays;//学生票改签预售期
@end
