//
// FILE
//
// Created by AUTHOR on DAY/MONTH/YEAR.
// Copyright (c) YEAR RenRenChe Inc. All rights reserved.
//


#import "VIPERWireframe.h"


@implementation VIPERWireframe

+ (void)presentVIPERModuleFrom:(UIViewController *)fromViewController {

    // Generating module components
    id <VIPERViewProtocol> view = [[VIPERView alloc] init];
    id <VIPERPresenterProtocol, VIPERInteractorOutputProtocol> presenter = [VIPERPresenter new];
    id <VIPERInteractorInputProtocol> interactor = [VIPERInteractor new];
    id <VIPERAPIDataManagerInputProtocol> APIDataManager = [VIPERAPIDataManager new];
    id <VIPERLocalDataManagerInputProtocol> localDataManager = [VIPERLocalDataManager new];
    id <VIPERWireframeProtocol> wireframe = [VIPERWireframe new];

    // Connecting module components
    view.presenter = presenter;
    presenter.view = view;
    presenter.wireframe = wireframe;
    presenter.interactor = interactor;
    interactor.presenter = presenter;
    interactor.APIDataManager = APIDataManager;
    interactor.localDataManager = localDataManager;

    // TODO - New view controller presentation (present, push, pop, .. )
}

@end
