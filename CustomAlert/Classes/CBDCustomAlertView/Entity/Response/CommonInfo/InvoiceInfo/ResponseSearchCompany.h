//
//  ResponseSearchCompany.h
//  CarBaDa
//
//  Created by zhaitong on 2018/6/25.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface records : NSObject
@property (nonatomic, copy) NSString *ciName;//公司名称
@property (nonatomic, copy) NSString *cityshxydm;//统一社会信用代码
@property (nonatomic, copy) NSString *ciId;//id
@end
@interface ResponseSearchCompany : NSObject
@property (nonatomic, strong) NSArray *records;//公司名称列表
@end
