//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAttachmentInlineDrawingModel.h"

@class NSObject<OS_dispatch_queue>, PKDrawing;

@interface ICAttachmentInlineDrawingModel (UI)
- (void)titleQuery:(id)arg1 didUpdateWithItem:(id)arg2;
- (void)setTitleQuery:(id)arg1;
- (id)titleQuery;
@property(nonatomic, getter=isTitleQueryEnabled) BOOL titleQueryEnabled;
- (void)setHandwritingRecognitionDrawingQueue:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *handwritingRecognitionDrawingQueue;
- (void)setHandwritingRecognitionDrawing:(id)arg1;
@property(readonly, nonatomic) PKDrawing *handwritingRecognitionDrawing;
@property(nonatomic, getter=isHandwritingRecognitionEnabled) BOOL handwritingRecognitionEnabled;
- (id)mergeableDataForCopying;
- (id)activityItems;
- (id)activityItem;
- (struct NSImage *)imageForActivityItem;
- (id)newDrawingFromMergeableData;
- (BOOL)actuallyMergeWithDrawing:(id)arg1;
- (BOOL)mergeWithMergeableData:(id)arg1;
- (BOOL)mergeWithDrawing:(id)arg1;
- (void)attachmentModelDealloc;
@end
