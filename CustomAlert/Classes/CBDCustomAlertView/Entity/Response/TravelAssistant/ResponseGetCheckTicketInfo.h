//
//  ResponseGetCheckTicketInfo.h
//  CarBaDa
//
//  Created by zjb on 2019/5/27.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetCheckTicketInfo : NSObject
@property (nonatomic, strong) NSString *dptPointLat;
@property (nonatomic, strong) NSString *dptPointLon;
@property (nonatomic, strong) NSString *ticketCodeType;
@property (nonatomic, strong) NSString *code;
@property (nonatomic, strong) NSMutableArray *ticketCodeList;
@property (nonatomic, strong) NSMutableArray *ticketImageFull;
@end

NS_ASSUME_NONNULL_END
