//
//  ResponseChangeInvoiceTitle.h
//  CarBaDa
//
//  Created by Vic_Li on 16/9/5.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetInvoiceTitle.h"
@interface ResponseChangeInvoiceTitle : NSObject
@property (nonatomic, copy) NSString *invoiceId;
@property (nonatomic, copy) NSString *invoiceTitle;
@property (nonatomic, copy) NSString *isSuccess;
@end
