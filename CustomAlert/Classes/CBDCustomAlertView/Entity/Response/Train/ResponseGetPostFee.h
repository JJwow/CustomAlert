//
//  ResponseGetPostFee.h
//  CarBaDa
//
//  Created by 丁健 on 2017/3/30.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetPostFee : NSObject
@property (nonatomic, copy) NSString *buyFee;//代购费
@property (nonatomic, copy) NSString *postFee;//邮寄费
@property (nonatomic, copy) NSString *expressArrivedContent;//邮寄可送达时间提示
@end
