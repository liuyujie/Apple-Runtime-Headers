//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary, NSString;

@interface PKPaymentNotificationActionResponse : PKPaymentWebServiceResponse
{
    NSDictionary *_aps;
    NSString *_action;
    NSString *_requestID;
}

@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSDictionary *aps; // @synthesize aps=_aps;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
