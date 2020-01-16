//
//  ResponseGetTrainStopStation.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/25.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetTrainStopStation : NSObject

@property (nonatomic,strong) NSArray *stations;

@end


@interface stations : NSObject
@property (nonatomic,strong) NSString *arrivalTime;//到达时间
@property (nonatomic,strong) NSString *departureTime;//发车时间
@property (nonatomic,strong) NSString *miles;//公里数
@property (nonatomic,strong) NSString *serialNumber;//站次
@property (nonatomic,strong) NSString *station;//站名
@property (nonatomic,strong) NSString *stayTimeSpan;//停留时间
//531行程助手加
@property (nonatomic,strong) NSString *lateRemark;//整晚点描述，例如：晚点10'到达
@property (nonatomic,strong) NSString *lateType;//0-正点；1-晚点；2-早点
@end
