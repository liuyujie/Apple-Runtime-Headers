//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachment.h"

#import "NSSecureCoding.h"

@class NSString;

@interface NNMKImageRenderingTextAttachment : NSTextAttachment <NSSecureCoding>
{
    id <NSTextAttachmentCell> _cell;
    NSString *_messageId;
    NSString *_mailboxId;
    NSString *_contentId;
    NSString *_mimePartNumber;
}

+ (_Bool)supportsSecureCoding;
+ (void)setCellClass:(Class)arg1;
@property(retain, nonatomic) NSString *mimePartNumber; // @synthesize mimePartNumber=_mimePartNumber;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (id)attachmentCell;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) id currentCell;

@end

