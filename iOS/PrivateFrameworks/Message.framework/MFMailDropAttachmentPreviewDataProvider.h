//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFAttachmentLibraryDataProvider.h>

@interface MFMailDropAttachmentPreviewDataProvider : MFAttachmentLibraryDataProvider
{
}

+ (id)fullResolutionAttachmentURLForAttachmentURL:(id)arg1;
+ (id)fullResolutionAttachmentForAttachment:(id)arg1;
+ (id)fullResolutionStorageLocationForAttachmentWithMimePart:(id)arg1 withMessage:(id)arg2;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

