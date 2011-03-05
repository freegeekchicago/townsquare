# Townsquare project

Townsquare is a Drupal-based collaboration platform for community organizations
who wish to track events, volunteer participation, provide documentation, and
facilitate conversations. 

Technically, it is a lightweight Drupal 7 distribution built on the Development Seed 
stack (features, context).  Townsquare is built for FreeGeek Chicago, but may have
other applications.

Copyright (c) 2010-2011, David Eads <davideads@gmail.com> 

Licensed under the GNU GPL.

# Project history

We've been meaning to do this for ages.

# Architecture

## Components

Townsquare is built around content-type oriented components, which provide 
context and functionality.  These components are:

 * **townsquare_core**: Core dependencies, blocks (user login), taxonomy 
   (tags), permissions, roles, and settings
 * **townsquare_wiki**: Wiki page content type, plus machinery for handling 
   Markdown/WYSIWYG issues
 * **townsquare_event**: Event content type, taxonomy (event type) calendar views
 * **townsquare_conversation**: Conversation content type and views
 * **townsquare_volunteer**: Volunteer session content type, advanced volunteer
   reporting

## Requirements

Townsquare must satisfy several requirements for FreeGeek Chicago

 * **Secure**: Townsquare is built around volunteer profiles, and needs to manage
   sensitive information with an extremely high level of privacy and security.
   At the same time, Townsquare is fundamentally open and participatory: 99%
   of the time, it needs standard website security (like spam blocking); 1% of
   the time it needs absolute security.
 * **Easy to use**: We need a snappy, simple UI that encourages volunteers to 
   participate and use the site for valuable information.
 * **Process integration**: The most important aspect of Townsquare is its
   relationship with real world practice. Volunteers should create an account
   during orientation; staff should use the site to direct volunteers to their
   next task and check up on eligibility.
 * **Device integration**: Email, text message, or web, we need to provide LOTS
   of ways for volunteers to hook into Townsquare.

# Roadmap

 * **Initial development (Q1-Q2, 2011)**: Content structure, architecture, and  
   theme/UI. Our primary need is getting volunteer management to the point
   where it can be integrated into day-to-day FreeGeek process. The social 
   aspects of the site can come later. We'll create a rudimentary wiki, solid
   volunteer management, and stub conversations and calendars.
 * **Feature expansion (Q2-Q3, 2011)**: FreeGeek's spring and summer project could
   be to build out several Townsquare areas. The effort at this point should
   be towards establishing Townsquare as a public project with a thoughtful
   social contract.
 * **Device integration (Q3+, 2011)**: If we're really rolling, in the latter half
   of 2011 we should turn to notifications -- using Townsquare to keep
   participants in the loop.

