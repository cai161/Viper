//
//
//
// Created by AUTHOR on DAY/MONTH/YEAR.
// Copyright (c) YEAR RenRenChe Inc. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@protocol VIPERInteractorOutputProtocol;
@protocol VIPERInteractorInputProtocol;
@protocol VIPERViewProtocol;
@protocol VIPERPresenterProtocol;
@protocol VIPERLocalDataManagerInputProtocol;
@protocol VIPERAPIDataManagerInputProtocol;


@class VIPERWireframe;

/**
* PRESENTER -> VIEWCONTROLLER
*/
@protocol VIPERViewProtocol
@required
@property (nonatomic, strong) id <VIPERPresenterProtocol> presenter;

@end

/**
* PRESENTER -> WIREFRAME
*/
@protocol VIPERWireframeProtocol
@required
+ (void)presentVIPERModuleFrom:(id)fromView;

@end

/**
* VIEWCONTROLLER -> PRESENTER
*/
@protocol VIPERPresenterProtocol
@required
@property (nonatomic, weak) id <VIPERViewProtocol> view;
@property (nonatomic, strong) id <VIPERInteractorInputProtocol> interactor;
@property (nonatomic, strong) id <VIPERWireframeProtocol> wireframe;

@end

/**
* INTERACTOR -> PRESENTER
*/
@protocol VIPERInteractorOutputProtocol

@end

/**
* PRESENTER -> INTERACTOR
*/
@protocol VIPERInteractorInputProtocol
@required
@property (nonatomic, weak) id <VIPERInteractorOutputProtocol> presenter;
@property (nonatomic, strong) id <VIPERAPIDataManagerInputProtocol> APIDataManager;
@property (nonatomic, strong) id <VIPERLocalDataManagerInputProtocol> localDataManager;

@end


/**
* INTERACTOR -> DATAMANAGER
*/
@protocol VIPERDataManagerInputProtocol

@end

/**
* INTERACTOR -> APIDATAMANAGER
*/
@protocol VIPERAPIDataManagerInputProtocol <VIPERDataManagerInputProtocol>

@end

/**
* INTERACTOR -> LOCLDATAMANAGER
*/
@protocol VIPERLocalDataManagerInputProtocol <VIPERDataManagerInputProtocol>

@end


