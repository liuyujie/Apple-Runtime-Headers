//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@protocol IMAPMessage <NSObject>
@property(readonly, nonatomic) BOOL shouldDeferBodyDownload;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly, copy, nonatomic) NSString *mailboxName;
@property(readonly) NSDate *dateReceived;
@property(readonly, copy) NSString *subject;
@property(readonly) unsigned long long messageSize;
@property BOOL partsHaveBeenCached;
@property BOOL isPartial;
@property(readonly, copy, nonatomic) NSString *messageID;
@property(readonly) id <IMAPMessageDataSource> dataSource;
@property unsigned int uid;
@end

