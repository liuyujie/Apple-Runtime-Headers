//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesUI/ICTextAttachment.h>

@interface ICTableTextAttachment : ICTextAttachment
{
    double _lastAvailableWidth;
    struct CGSize _lastAttachmentSize;
}

@property(nonatomic) struct CGSize lastAttachmentSize; // @synthesize lastAttachmentSize=_lastAttachmentSize;
@property(nonatomic) double lastAvailableWidth; // @synthesize lastAvailableWidth=_lastAvailableWidth;
- (id)printableTextContent;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange)arg2 forPlainText:(_Bool)arg3 forStandardizedText:(_Bool)arg4;
- (CDStruct_d2b197d1)attachmentBoundsMargins;
- (_Bool)canDragWithoutSelecting;

@end

