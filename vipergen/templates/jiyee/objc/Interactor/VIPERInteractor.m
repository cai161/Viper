//
// Created by AUTHOR
// Copyright (c) YEAR AUTHOR. All rights reserved.
//

#import "VIPERInteractor.h"

@interface VIPERInteractor ()

@property (nonatomic, strong) VIPERAPIDataManager *APIDataManager;

@end

@implementation VIPERInteractor

- (instancetype)initWithDataManager:(VIPERAPIDataManager *)APIDataManager {
        
    self = [super init];
    if (self) {
        _APIDataManager = APIDataManager;
    }

    return self;
}

#pragma mark - Interactor Input methods

/**
 * Implement interactor input protocol methods here
 * Make calls to output when needed
 */


#pragma mark - Private methods

/**
 * Implement this interactor private methods here
 */

@end
