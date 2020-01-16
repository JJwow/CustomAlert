//
//  ResponseQueryNearallDriver.h
//  CarBaDa
//
//  Created by mini on 2019/2/25.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseCarpoolGetCharteredPosition.h"

@interface ResponseQueryNearallDriver : NSObject

@property(nonatomic, strong) NSString *carImg;
@property(nonatomic,strong)NSMutableArray *positionList;//位置坐标变化列表

@end
