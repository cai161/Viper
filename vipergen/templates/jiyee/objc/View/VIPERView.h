//
//
//
// Created by AUTHOR on DAY/MONTH/YEAR.
// Copyright (c) YEAR RenRenChe Inc. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "VIPERProtocols.h"


@interface VIPERView : UIViewController <VIPERViewProtocol>

@property (nonatomic, strong) id <VIPERPresenterProtocol> presenter;

@end
