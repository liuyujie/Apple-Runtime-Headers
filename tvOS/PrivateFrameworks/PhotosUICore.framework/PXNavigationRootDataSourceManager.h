//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class PXNavigationListDataSource;

@interface PXNavigationRootDataSourceManager : PXSectionedDataSourceManager
{
    id <PXNavigationRoot> _navigationRoot;
}

@property(readonly, nonatomic) id <PXNavigationRoot> navigationRoot; // @synthesize navigationRoot=_navigationRoot;
- (void).cxx_destruct;
- (id)createInitialDataSource;
- (id)initWithNavigationRoot:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXNavigationListDataSource *dataSource; // @dynamic dataSource;

@end

