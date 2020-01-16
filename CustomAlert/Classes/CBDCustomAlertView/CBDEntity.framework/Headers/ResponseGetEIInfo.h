//
//  ResponseGetEIInfo.h
//  CarBaDa
//
//  Created by Jabir-Zhang on 2019/12/9.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetInvoiceTitle.h"
NS_ASSUME_NONNULL_BEGIN

@interface uninvoiceList : NSObject
@property (nonatomic, strong) NSString *title;//标题
@property (nonatomic, strong) NSString *remark;//说明
@property (nonatomic, strong) NSString *price;//金额

@end

@interface ResponseGetEIInfo : NSObject
@property (nonatomic, strong) NSString *iseleInvoice;//0-不支持开票，1-支持开票；2-部分支持开票
@property (nonatomic, strong) NSString *invoiceAmount;//开票金额
@property (nonatomic, strong) NSString *notSupportType;//不支持开票类型，1-正常；2-停班不支持；3-开票金额为0
@property (nonatomic, strong) NSMutableArray *invoiceList;//可开票项列表
@property (nonatomic, strong) NSMutableArray *uninvoiceList;//不可开票项列表
@end

NS_ASSUME_NONNULL_END
