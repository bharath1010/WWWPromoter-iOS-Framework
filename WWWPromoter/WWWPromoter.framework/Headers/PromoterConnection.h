//
//  PromoterConnection.h
//  Promoter
//
//  Created by macbook on 09/06/17.
//  Copyright © 2017 Falconnect Technologies Private Limited. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface PromoterConnection : NSObject<NSXMLParserDelegate>

@property(nonatomic,retain) NSString *appName;

@property(nonatomic,retain) NSString *url;

@property(nonatomic,retain) NSString *appFeedId;
@property(nonatomic,retain) NSString *userAgent;


+(instancetype) sharedManager;

@property (nonatomic,retain) NSXMLParser *xmlparser;
@property (nonatomic) BOOL selecteditem;


-(void)InitWithFeedId:(NSString *)feedId;
-(void) getConnection;



@end
