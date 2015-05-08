//
// Created by AUTHOR
// Copyright (c) YEAR AUTHOR. All rights reserved.
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

    // Connecting
    view.presenter = presenter;
    presenter.view = view;
    presenter.wireframe = wireframe;
    presenter.interactor = interactor;
    interactor.presenter = presenter;
    interactor.APIDataManager = APIDataManager;
    interactor.localDataManager = localDataManager;

    //TODO - New view controller presentation (present, push, pop, .. )
}

@end
