//
// Created by AUTHOR
// Copyright (c) YEAR AUTHOR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VIPERProtocols.h"


@interface VIPERInteractor : NSObject <VIPERInteractorInputProtocol>

@property (nonatomic, strong) id <VIPERAPIDataManagerInputProtocol> APIDataManager;
@property (nonatomic, strong) id <VIPERLocalDataManagerInputProtocol> localDataManager;
@property (nonatomic, weak) id <VIPERInteractorOutputProtocol> output;

- (instancetype)initWithAPIDataManager:(VIPERAPIDataManager *)APIDataManager;

@end
