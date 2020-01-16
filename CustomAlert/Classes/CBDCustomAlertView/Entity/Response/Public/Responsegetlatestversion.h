//
//  Responsegetlatestversion.h
//  CarBaDa
//
//  Created by Alex on 15/7/7.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface versionDetail : NSObject
@property (nonatomic,strong) NSString *versionNo;
@property (nonatomic,strong) NSArray *versionDesps;
@property (nonatomic,strong) NSString *downLoadUrl;
@end

@interface Responsegetlatestversion : NSObject
@property (nonatomic,strong) NSString *isLatest;
@property (nonatomic,strong) versionDetail *versionDetail;
@property (nonatomic,strong) NSString *forceUpdate;//强制更新是否开启
@end
