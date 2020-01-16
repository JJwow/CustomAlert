//
//  Responsequeryneardriver.h
//  CarBaDa
//
//  Created by mini on 2018/8/10.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseCarpoolGetCharteredPosition.h"

@interface Responsequeryneardriver : NSObject


@property (nonatomic, strong) NSString *count;
@property(nonatomic,strong)NSMutableArray *positionList;//位置坐标变化列表

@end
