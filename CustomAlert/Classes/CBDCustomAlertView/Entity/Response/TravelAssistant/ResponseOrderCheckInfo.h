//
//  ResponseOrderCheckInfo.h
//  CarBaDa
//
//  Created by zjb on 2019/5/23.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseOrderCheckInfo : NSObject
@property (nonatomic, strong) NSMutableArray *ticketCodeList;//取票信息
@property (nonatomic, strong) NSMutableArray *ticketImageFull;//
@property (nonatomic, strong) NSString *ticketCodeType;//0一维码 1二维码
@end

NS_ASSUME_NONNULL_END
