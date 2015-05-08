//
// FILE
//
// Created by AUTHOR on DAY/MONTH/YEAR.
// Copyright (c) YEAR RenRenChe Inc. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "VIPERProtocols.h"

@class VIPERAPIDataManager;

@interface VIPERInteractor : NSObject <VIPERInteractorInputProtocol>

@property (nonatomic, strong) id <VIPERAPIDataManagerInputProtocol> APIDataManager;
@property (nonatomic, strong) id <VIPERLocalDataManagerInputProtocol> localDataManager;
@property (nonatomic, weak) id <VIPERInteractorOutputProtocol> presenter;

- (instancetype)initWithAPIDataManager:(VIPERAPIDataManager *)APIDataManager;

@end
