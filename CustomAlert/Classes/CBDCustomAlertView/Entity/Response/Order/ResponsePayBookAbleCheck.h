//
//  ResponsePayBookAbleCheck.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/4/21.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponsePayBookAbleCheck : NSObject
@property (nonatomic, copy) NSString *canBooking;
@property (nonatomic, copy) NSString *displayMsg;//不可定时弹出的原因
@property (nonatomic, copy) NSString *isSuccess;//
@end
