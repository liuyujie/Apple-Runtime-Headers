//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXCMMActionPerformer.h>

@class NSURL;

@interface PXCMMShowMessageComposeActionPerformer : PXCMMActionPerformer
{
    NSURL *_shareURL;
}

@property(readonly, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
- (void).cxx_destruct;
- (id)performActionWithSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performMessageComposeActionWithSession:(id)arg1 shareURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

