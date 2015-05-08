//
// Created by AUTHOR
// Copyright (c) YEAR AUTHOR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VIPERProtocols.h"


@class VIPERWireframe;

@interface VIPERPresenter : NSObject <VIPERPresenterProtocol, VIPERInteractorOutputProtocol>

@property (nonatomic, weak) id <VIPERViewProtocol> view;
@property (nonatomic, strong) id <VIPERInteractorInputProtocol> interactor;
@property (nonatomic, strong) id <VIPERWireframeProtocol> wireframe;

@end
