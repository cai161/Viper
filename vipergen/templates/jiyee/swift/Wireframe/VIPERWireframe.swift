//
// Created by AUTHOR
// Copyright (c) YEAR AUTHOR. All rights reserved.
//

import Foundation

class VIPERWireframe: VIPERWireframeProtocol
{
    class func presentVIPERModule(fromView view: AnyObject)
    {
        // Generating module components
        var view: VIPERViewProtocol = VIPERView()
        var presenter: protocol<VIPERPresenterProtocol, VIPERInteractorOutputProtocol> = VIPERPresenter()
        var interactor: VIPERInteractorInputProtocol = VIPERInteractor()
        var APIDataManager: VIPERAPIDataManagerInputProtocol = VIPERAPIDataManager()
        var localDataManager: VIPERLocalDataManagerInputProtocol = VIPERLocalDataManager()
        var wireframe: VIPERWireframeProtocol = VIPERWireframe()

        // Connecting
        view.presenter = presenter
        presenter.view = view
        presenter.wireframe = wireframe
        presenter.interactor = interactor
        interactor.presenter = presenter
        interactor.APIDataManager = APIDataManager
        interactor.localDatamanager = localDataManager
    }
}