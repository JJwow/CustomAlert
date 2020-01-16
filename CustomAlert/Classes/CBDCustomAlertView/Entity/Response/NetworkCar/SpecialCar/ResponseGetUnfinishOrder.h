//
//  ResponseGetUnfinishOrder.h
//  CarBaDa
//
//  Created by mini on 2018/12/28.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetUnfinishOrder.h"

@interface ResponseGetUnfinishOrder : NSObject
@property (nonatomic, strong) NSMutableArray *unOrderList;
@end


@interface unOrderList : NSObject
@property (nonatomic,strong) NSString *orderSerialId;
@property (nonatomic,strong) NSString *orderResource;
@end
