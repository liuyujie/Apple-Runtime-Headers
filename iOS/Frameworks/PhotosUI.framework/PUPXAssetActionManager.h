//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUAssetActionManager.h>

@class PXAssetActionManager;

__attribute__((visibility("hidden")))
@interface PUPXAssetActionManager : PUAssetActionManager
{
    PXAssetActionManager *_underlyingActionManager;
}

- (void).cxx_destruct;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetReferences:(id)arg2;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)_selectionSnapshotForAssetReferences:(id)arg1;
- (id)px_selectionManager;
- (id)initWithUnderlyingActionManager:(id)arg1;
- (id)init;

@end

