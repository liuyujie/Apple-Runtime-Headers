//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, PHPhotoLibrary, PHProject, RDAlbum;

@interface PHProjectChangeRequest : NSObject
{
    PHProject *_originalProject;
    RDAlbum *_mutableModel;
    PHPhotoLibrary *_photoLibrary;
}

+ (id)creationRequestForProjectWithExtensionIdentifier:(id)arg1 documentType:(id)arg2;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) RDAlbum *mutableModel; // @synthesize mutableModel=_mutableModel;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
- (void)setKeyAsset:(id)arg1;
@property(copy, nonatomic) NSData *projectExtensionData;
@property(readonly, nonatomic) RDAlbum *model;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
- (id)initWithProject:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end
