//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import "PXNavigationListDataSourceManagerObserver.h"

@class NSString, PXExtendedTraitCollection, PXNavigationListDataSourceManager;

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSourceManagerObserver>
{
    _Bool _shouldShowNavigationListOnIpad;
    _Bool _isPresentedInPicker;
    unsigned long long _type;
    PXExtendedTraitCollection *_traitCollection;
    PXNavigationListDataSourceManager *_dataSourceManager;
}

@property(readonly, nonatomic) _Bool isPresentedInPicker; // @synthesize isPresentedInPicker=_isPresentedInPicker;
@property(retain, nonatomic) PXNavigationListDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool shouldShowNavigationListOnIpad; // @synthesize shouldShowNavigationListOnIpad=_shouldShowNavigationListOnIpad;
- (void).cxx_destruct;
- (void)_initializeDataSourceManagerIfNeeded;
@property(readonly, nonatomic) _Bool shouldShowNavigationListForDeviceAndLayoutClass;
- (void)_updateGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)startLoadingRemainingData;
- (void)generateGadgets;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 isPresentedInPicker:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

