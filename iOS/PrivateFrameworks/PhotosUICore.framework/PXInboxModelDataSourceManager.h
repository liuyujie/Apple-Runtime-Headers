//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import "PXInboxModelDataSourceManagerBase.h"

@class NSString, PXSectionedDataSource<PXInboxModelDataSourceBase>;

@interface PXInboxModelDataSourceManager : PXSectionedDataSourceManager <PXInboxModelDataSourceManagerBase>
{
}

@property(readonly, nonatomic) id <PXInboxProviderSource> providerSource;

// Remaining properties
@property(readonly, nonatomic) PXSectionedDataSource<PXInboxModelDataSourceBase> *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

