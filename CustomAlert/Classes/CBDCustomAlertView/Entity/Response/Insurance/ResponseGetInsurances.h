//
//  ResponseGetInsurances.h
//  CarBaDa
//
//  Created by Jabir on 15/11/26.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface insuranceList : NSObject
@property (nonatomic,strong) NSString *insCode;
@property (nonatomic,strong) NSString *insName;
@property (nonatomic,strong) NSString *insPrice;
@property (nonatomic,strong) NSString *isDefault;
@end

@interface ResponseGetInsurances : NSObject
@property (nonatomic,strong) NSMutableArray *insuranceList;
@property (nonatomic,strong) NSString *supplierId;
@property (nonatomic,strong) NSString *isMail;//是否邮寄  0 否 1 是
@end
