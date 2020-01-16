//
//  ResponseGetAirportTransferSource.h
//  CarBaDa
//
//  Created by 丁健 on 2019/5/17.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ResponseGetAirportTransferSource : NSObject
@property (nonatomic,strong)NSMutableArray *airportLines;
@property (nonatomic, copy) NSString *customCarRemark;
@property (nonatomic, copy) NSString *tips;

@end

