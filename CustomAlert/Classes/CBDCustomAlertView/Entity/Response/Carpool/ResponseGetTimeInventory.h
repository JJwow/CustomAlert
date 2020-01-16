//
//  ResponseGetTimeInventory.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/12/2.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface timeInventorys : NSObject

@property (nonatomic, copy) NSString *useTime;//标准格式 出发时间

@property (nonatomic, copy) NSString *inventoryRemark;//剩余X座 库存说明

@property (nonatomic, copy) NSString *inventoryId;//库存id

@end

@interface ResponseGetTimeInventory : NSObject

@property (nonatomic, copy) NSArray *timeInventorys;//库存时间段数组

@end

NS_ASSUME_NONNULL_END
