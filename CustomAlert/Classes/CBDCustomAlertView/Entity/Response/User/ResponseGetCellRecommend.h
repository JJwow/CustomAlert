//
//  ResponseGetCellRecommend.h
//  CarBaDa
//
//  Created by admin on 16/8/9.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseGetCellRecommend : TCTResponseObject

@property (nonatomic, strong) NSString *cellDescription;
@property (nonatomic, strong) NSString *cellImage;
@property (nonatomic, strong) NSString *cellIcon;
@property (nonatomic, strong) NSString *appLink;

@end
